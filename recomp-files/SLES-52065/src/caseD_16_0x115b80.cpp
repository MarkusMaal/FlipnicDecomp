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

// Function: caseD_16
// Address: 0x115b80 - 0x115bb4
void caseD_16_0x115b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x115b80");
#endif

    switch (ctx->pc) {
        case 0x115bacu: goto label_115bac;
        default: break;
    }

    ctx->pc = 0x115b80u;

    // 0x115b80: 0x92420285  lbu         $v0, 0x285($s2)
    ctx->pc = 0x115b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 645)));
    // 0x115b84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x115B84u;
    {
        const bool branch_taken_0x115b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B84u;
        // 0x115b88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b84) {
            ctx->pc = 0x115BB4u;
            return;
        }
    }
    ctx->pc = 0x115B8Cu;
    // 0x115b8c: 0x8e450288  lw          $a1, 0x288($s2)
    ctx->pc = 0x115b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
    // 0x115b90: 0x9246028c  lbu         $a2, 0x28C($s2)
    ctx->pc = 0x115b90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x115b94: 0x8e470290  lw          $a3, 0x290($s2)
    ctx->pc = 0x115b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
    // 0x115b98: 0x8e480294  lw          $t0, 0x294($s2)
    ctx->pc = 0x115b98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
    // 0x115b9c: 0x92490298  lbu         $t1, 0x298($s2)
    ctx->pc = 0x115b9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x115ba0: 0x8e4a029c  lw          $t2, 0x29C($s2)
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
    // 0x115ba4: 0xc045700  jal         func_115C00
    ctx->pc = 0x115BA4u;
    SET_GPR_U32(ctx, 31, 0x115BACu);
    ctx->pc = 0x115BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BA4u;
    // 0x115ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115BA4u, 0x115BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BACu;
label_115bac:
    // 0x115bac: 0xa2400285  sb          $zero, 0x285($s2)
    ctx->pc = 0x115bacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 645), (uint8_t)GPR_U32(ctx, 0));
    // 0x115bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115bb4u;
}
