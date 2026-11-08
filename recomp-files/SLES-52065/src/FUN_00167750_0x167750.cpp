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

// Function: FUN_00167750
// Address: 0x167750 - 0x1677ec
void FUN_00167750_0x167750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167750_0x167750");
#endif

    switch (ctx->pc) {
        case 0x16777cu: goto label_16777c;
        case 0x1677b8u: goto label_1677b8;
        case 0x1677c8u: goto label_1677c8;
        default: break;
    }

    ctx->pc = 0x167750u;

    // 0x167750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16775c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167764: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x167764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x167768: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x167768u;
    {
        const bool branch_taken_0x167768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x167768) {
            ctx->pc = 0x1677D0u;
            goto label_1677d0;
        }
    }
    ctx->pc = 0x167770u;
    // 0x167770: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x167774: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x167774u;
    SET_GPR_U32(ctx, 31, 0x16777Cu);
    ctx->pc = 0x167778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167774u;
    // 0x167778: 0xa6020228  sh          $v0, 0x228($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x167774u, 0x16777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16777Cu;
label_16777c:
    // 0x16777c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x167784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x167788: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x167788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x16778c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16778cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167790: 0x0  nop
    ctx->pc = 0x167790u;
    // NOP
    // 0x167794: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x167794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x167798: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x167798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x16779c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16779cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1677a0: 0x0  nop
    ctx->pc = 0x1677a0u;
    // NOP
    // 0x1677a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1677a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1677a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1677a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1677ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1677acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1677b0: 0xc042118  jal         func_108460
    ctx->pc = 0x1677B0u;
    SET_GPR_U32(ctx, 31, 0x1677B8u);
    ctx->pc = 0x1677B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677B0u;
    // 0x1677b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1677B0u, 0x1677B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677B8u;
label_1677b8:
    // 0x1677b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1677bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1677bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677c0: 0xc05bc2c  jal         func_16F0B0
    ctx->pc = 0x1677C0u;
    SET_GPR_U32(ctx, 31, 0x1677C8u);
    ctx->pc = 0x1677C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677C0u;
    // 0x1677c4: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F0B0u, 0x1677C0u, 0x1677C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677C8u;
label_1677c8:
    // 0x1677c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1677C8u;
    {
        const bool branch_taken_0x1677c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677C8u;
        // 0x1677cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677c8) {
            ctx->pc = 0x1677E0u;
            goto label_1677e0;
        }
    }
    ctx->pc = 0x1677D0u;
label_1677d0:
    // 0x1677d0: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1677D0u;
    {
        const bool branch_taken_0x1677d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1677D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D0u;
        // 0x1677d4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677d0) {
            ctx->pc = 0x1677DCu;
            goto label_1677dc;
        }
    }
    ctx->pc = 0x1677D8u;
    // 0x1677d8: 0xa6030228  sh          $v1, 0x228($s0)
    ctx->pc = 0x1677d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 3));
label_1677dc:
    // 0x1677dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1677dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1677e0:
    // 0x1677e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1677e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1677e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1677E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1677E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677E4u;
        // 0x1677e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1677E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1677ECu;
}
