#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00103328
// Address: 0x103328 - 0x103360
void entry_00103328_0x103328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103328_0x103328");
#endif

    switch (ctx->pc) {
        case 0x103348u: goto label_103348;
        default: break;
    }

    ctx->pc = 0x103328u;

    // 0x103328: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10332c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x103330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x103334: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x103334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x103338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10333c: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10333cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x103340: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x103340u;
    SET_GPR_U32(ctx, 31, 0x103348u);
    ctx->pc = 0x103344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103340u;
    // 0x103344: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x103340u, 0x103348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103348u;
label_103348:
    // 0x103348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10334c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x103350: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103350u;
    {
        const bool branch_taken_0x103350 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x103350) {
            ctx->pc = 0x103360u;
            return;
        }
    }
    ctx->pc = 0x103358u;
    // 0x103358: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x103358u;
    {
        const bool branch_taken_0x103358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103358u;
        // 0x10335c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103358) {
            ctx->pc = 0x10338Cu;
            return;
        }
    }
    ctx->pc = 0x103360u;
}
