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

// Function: FUN_00147aa0
// Address: 0x147aa0 - 0x147b20
void FUN_00147aa0_0x147aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147aa0_0x147aa0");
#endif

    switch (ctx->pc) {
        case 0x147abcu: goto label_147abc;
        default: break;
    }

    ctx->pc = 0x147aa0u;

    // 0x147aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x147aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147aac: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x147aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147ab4: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x147AB4u;
    SET_GPR_U32(ctx, 31, 0x147ABCu);
    ctx->pc = 0x147AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AB4u;
    // 0x147ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x147AB4u, 0x147ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147ABCu;
label_147abc:
    // 0x147abc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x147abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x147ac0: 0x34038007  ori         $v1, $zero, 0x8007
    ctx->pc = 0x147ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    // 0x147ac4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x147ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147ac8: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x147ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147acc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x147ad0: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x147ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x147ad4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x147ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x147ad8: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x147ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x147adc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x147ae0: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x147ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x147ae4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x147ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x147ae8: 0xfe050028  sd          $a1, 0x28($s0)
    ctx->pc = 0x147ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 5));
    // 0x147aec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147af0: 0xfe040038  sd          $a0, 0x38($s0)
    ctx->pc = 0x147af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 4));
    // 0x147af4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x147af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x147af8: 0xfe030048  sd          $v1, 0x48($s0)
    ctx->pc = 0x147af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
    // 0x147afc: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x147afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x147b00: 0xfe050058  sd          $a1, 0x58($s0)
    ctx->pc = 0x147b00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 5));
    // 0x147b04: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x147b08: 0xfe040068  sd          $a0, 0x68($s0)
    ctx->pc = 0x147b08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
    // 0x147b0c: 0xfe030078  sd          $v1, 0x78($s0)
    ctx->pc = 0x147b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 3));
    // 0x147b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147b18: 0x3e00008  jr          $ra
    ctx->pc = 0x147B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B18u;
        // 0x147b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147B20u;
}
