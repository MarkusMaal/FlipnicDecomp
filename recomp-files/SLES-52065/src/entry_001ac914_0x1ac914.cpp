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

// Function: entry_001ac914
// Address: 0x1ac914 - 0x1ac954
void entry_001ac914_0x1ac914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac914_0x1ac914");
#endif

    switch (ctx->pc) {
        case 0x1ac94cu: goto label_1ac94c;
        default: break;
    }

    ctx->pc = 0x1ac914u;

    // 0x1ac914: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    // 0x1ac918: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC918u;
    {
        const bool branch_taken_0x1ac918 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ac918) {
            ctx->pc = 0x1AC95Cu;
            return;
        }
    }
    ctx->pc = 0x1AC920u;
    // 0x1ac920: 0xae2006dc  sw          $zero, 0x6DC($s1)
    ctx->pc = 0x1ac920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 0));
    // 0x1ac924: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ac928: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ac928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ac92c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC92Cu;
    {
        const bool branch_taken_0x1ac92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC92Cu;
        // 0x1ac930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac92c) {
            ctx->pc = 0x1AC954u;
            return;
        }
    }
    ctx->pc = 0x1AC934u;
    // 0x1ac934: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ac934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1ac938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac940: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac944: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC944u;
    SET_GPR_U32(ctx, 31, 0x1AC94Cu);
    ctx->pc = 0x1AC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC944u;
    // 0x1ac948: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC944u, 0x1AC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC94Cu;
label_1ac94c:
    // 0x1ac94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC94Cu;
    {
        const bool branch_taken_0x1ac94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC94Cu;
        // 0x1ac950: 0x922306d9  lbu         $v1, 0x6D9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1753)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac94c) {
            ctx->pc = 0x1AC960u;
            return;
        }
    }
    ctx->pc = 0x1AC954u;
}
