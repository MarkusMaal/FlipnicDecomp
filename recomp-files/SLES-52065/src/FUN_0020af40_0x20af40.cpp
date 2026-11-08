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

// Function: FUN_0020af40
// Address: 0x20af40 - 0x20afc8
void FUN_0020af40_0x20af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020af40_0x20af40");
#endif

    ctx->pc = 0x20af40u;

    // 0x20af40: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x20af40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20af44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20af44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20af48: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20af4c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20af50: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x20af50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x20af54: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x20af58: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x20af58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x20af5c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x20af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x20af60: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x20af60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x20af64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20af64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20af68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20af68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20af6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20af70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20af70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20af74: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x20af74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20af78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20af7c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20af80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20af84: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x20af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x20af88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20af88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20af8c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20af8cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20af90: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x20af90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x20af94: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x20af94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x20af98: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x20af98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x20af9c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x20af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x20afa0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x20afa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x20afa4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AFA4u;
    {
        const bool branch_taken_0x20afa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFA4u;
        // 0x20afa8: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afa4) {
            ctx->pc = 0x20AFB8u;
            goto label_20afb8;
        }
    }
    ctx->pc = 0x20AFACu;
    // 0x20afac: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x20afacu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x20afb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AFB0u;
    {
        const bool branch_taken_0x20afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB0u;
        // 0x20afb4: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afb0) {
            ctx->pc = 0x20AFBCu;
            goto label_20afbc;
        }
    }
    ctx->pc = 0x20AFB8u;
label_20afb8:
    // 0x20afb8: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x20afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_20afbc:
    // 0x20afbc: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x20afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20afc0: 0x3e00008  jr          $ra
    ctx->pc = 0x20AFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFC0u;
        // 0x20afc4: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AFC8u;
}
