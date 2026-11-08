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

// Function: entry_00188a8c
// Address: 0x188a8c - 0x188ad8
void entry_00188a8c_0x188a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a8c_0x188a8c");
#endif

    switch (ctx->pc) {
        case 0x188aa4u: goto label_188aa4;
        default: break;
    }

    ctx->pc = 0x188a8cu;

    // 0x188a8c: 0x0  nop
    ctx->pc = 0x188a8cu;
    // NOP
    // 0x188a90: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x188a94: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x188a98: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x188a9c: 0xc062214  jal         func_188850
    ctx->pc = 0x188A9Cu;
    SET_GPR_U32(ctx, 31, 0x188AA4u);
    ctx->pc = 0x188AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A9Cu;
    // 0x188aa0: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188A9Cu, 0x188AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AA4u;
label_188aa4:
    // 0x188aa4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x188aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x188aa8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x188aac: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x188aacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188ab0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x188AB0u;
    {
        const bool branch_taken_0x188ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188ab0) {
            ctx->pc = 0x188AD8u;
            return;
        }
    }
    ctx->pc = 0x188AB8u;
    // 0x188ab8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x188ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x188abc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188ABCu;
    {
        const bool branch_taken_0x188abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188abc) {
            ctx->pc = 0x188AD8u;
            return;
        }
    }
    ctx->pc = 0x188AC4u;
    // 0x188ac4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x188ac8: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x188ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x188acc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x188accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x188ad0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188ad4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x188ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->pc = 0x188ad8u;
}
