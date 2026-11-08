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

// Function: FUN_00200968
// Address: 0x200968 - 0x200a28
void FUN_00200968_0x200968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200968_0x200968");
#endif

    switch (ctx->pc) {
        case 0x20098cu: goto label_20098c;
        case 0x20099cu: goto label_20099c;
        case 0x200a10u: goto label_200a10;
        default: break;
    }

    ctx->pc = 0x200968u;

    // 0x200968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20096c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x20096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x200970: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x200970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x200974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20097c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x200980: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x200980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x200984: 0xc08019a  jal         func_200668
    ctx->pc = 0x200984u;
    SET_GPR_U32(ctx, 31, 0x20098Cu);
    ctx->pc = 0x200988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200984u;
    // 0x200988: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200668u, 0x200984u, 0x20098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20098Cu;
label_20098c:
    // 0x20098c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20098cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200994: 0xc08019a  jal         func_200668
    ctx->pc = 0x200994u;
    SET_GPR_U32(ctx, 31, 0x20099Cu);
    ctx->pc = 0x200998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200994u;
    // 0x200998: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200668u, 0x200994u, 0x20099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20099Cu;
label_20099c:
    // 0x20099c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x20099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2009a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2009a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009a4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2009a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2009a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2009acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2009b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2009b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2009b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2009b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2009bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2009c0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2009C0u;
    {
        const bool branch_taken_0x2009c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2009C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C0u;
        // 0x2009c4: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009c0) {
            ctx->pc = 0x2009E8u;
            goto label_2009e8;
        }
    }
    ctx->pc = 0x2009C8u;
    // 0x2009c8: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x2009c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2009cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2009ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2009d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2009d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2009d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2009d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2009d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2009dc: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x2009dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x2009e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2009E0u;
    {
        const bool branch_taken_0x2009e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009E0u;
        // 0x2009e4: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009e0) {
            ctx->pc = 0x200A04u;
            goto label_200a04;
        }
    }
    ctx->pc = 0x2009E8u;
label_2009e8:
    // 0x2009e8: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x2009e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2009ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2009f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2009f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2009f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2009f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2009fc: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2009fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x200a00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_200a04:
    // 0x200a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a08: 0xc0820d8  jal         func_208360
    ctx->pc = 0x200A08u;
    SET_GPR_U32(ctx, 31, 0x200A10u);
    ctx->pc = 0x200A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A08u;
    // 0x200a0c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x200A08u, 0x200A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A10u;
label_200a10:
    // 0x200a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x200a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200a14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200a18: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x200a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200a1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a20: 0x3e00008  jr          $ra
    ctx->pc = 0x200A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A20u;
        // 0x200a24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A28u;
}
