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

// Function: FUN_001cbde0
// Address: 0x1cbde0 - 0x1cbeb4
void FUN_001cbde0_0x1cbde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbde0_0x1cbde0");
#endif

    switch (ctx->pc) {
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbea0u: goto label_1cbea0;
        default: break;
    }

    ctx->pc = 0x1cbde0u;

    // 0x1cbde0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cbde4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbdec: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbdf0: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cbdf4: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cbdf8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbdfc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cbe00: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cbe04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cbe08: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbe0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cbe10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cbe14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cbe18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cbe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cbe20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbe24: 0xdc620060  ld          $v0, 0x60($v1)
    ctx->pc = 0x1cbe24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1cbe28: 0x24690060  addiu       $t1, $v1, 0x60
    ctx->pc = 0x1cbe28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1cbe2c: 0x25270010  addiu       $a3, $t1, 0x10
    ctx->pc = 0x1cbe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1cbe30: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1cbe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1cbe34: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1cbe38: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1cbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1cbe3c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1cbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1cbe40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1cbe40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
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
