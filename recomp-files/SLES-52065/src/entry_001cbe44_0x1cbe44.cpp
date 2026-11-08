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

// Function: entry_001cbe44
// Address: 0x1cbe44 - 0x1cbeb4
void entry_001cbe44_0x1cbe44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbe44_0x1cbe44");
#endif

    switch (ctx->pc) {
        case 0x1cbea0u: goto label_1cbea0;
        default: break;
    }

    ctx->pc = 0x1cbe44u;

label_1cbe44:
    // 0x1cbe44: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cbe48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cbe4c: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x1cbe4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1cbe50: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1cbe50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbe54: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1cbe58: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1cbe58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbe5c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CBE5Cu;
    {
        const bool branch_taken_0x1cbe5c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE5Cu;
        // 0x1cbe60: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe5c) {
            ctx->pc = 0x1CBE44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbe44;
        }
    }
    ctx->pc = 0x1CBE64u;
    // 0x1cbe64: 0x91230030  lbu         $v1, 0x30($t1)
    ctx->pc = 0x1cbe64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1cbe68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1cbe6c: 0x91220031  lbu         $v0, 0x31($t1)
    ctx->pc = 0x1cbe6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 49)));
    // 0x1cbe70: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1cbe70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbe74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cbe78: 0x27a70042  addiu       $a3, $sp, 0x42
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1cbe7c: 0x2484f9b0  addiu       $a0, $a0, -0x650
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965680));
    // 0x1cbe80: 0x24a529c8  addiu       $a1, $a1, 0x29C8
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10696));
    // 0x1cbe84: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1cbe84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbe88: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x1cbe88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbe8c: 0x91230032  lbu         $v1, 0x32($t1)
    ctx->pc = 0x1cbe8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 50)));
    // 0x1cbe90: 0x91220033  lbu         $v0, 0x33($t1)
    ctx->pc = 0x1cbe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 51)));
    // 0x1cbe94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1cbe94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbe98: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CBE98u;
    SET_GPR_U32(ctx, 31, 0x1CBEA0u);
    ctx->pc = 0x1CBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE98u;
    // 0x1cbe9c: 0xa0e20001  sb          $v0, 0x1($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CBE98u, 0x1CBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEA0u;
label_1cbea0:
    // 0x1cbea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbea4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1cbea8: 0x2442f9b0  addiu       $v0, $v0, -0x650
    ctx->pc = 0x1cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965680));
    // 0x1cbeac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEACu;
        // 0x1cbeb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBEB4u;
}
