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

// Function: entry_00201cf8
// Address: 0x201cf8 - 0x201d1c
void entry_00201cf8_0x201cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201cf8_0x201cf8");
#endif

    ctx->pc = 0x201cf8u;

label_201cf8:
    // 0x201cf8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x201cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201cfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201d00: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x201d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x201d04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x201d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x201d08: 0x0  nop
    ctx->pc = 0x201d08u;
    // NOP
    // 0x201d0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201D0Cu;
    {
        const bool branch_taken_0x201d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D0Cu;
        // 0x201d10: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d0c) {
            ctx->pc = 0x201CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201D14u;
    // 0x201d14: 0x3e00008  jr          $ra
    ctx->pc = 0x201D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D14u;
        // 0x201d18: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D1Cu;
}
