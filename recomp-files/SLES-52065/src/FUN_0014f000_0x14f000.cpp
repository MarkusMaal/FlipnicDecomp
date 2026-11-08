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

// Function: FUN_0014f000
// Address: 0x14f000 - 0x14f0a8
void FUN_0014f000_0x14f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f000_0x14f000");
#endif

    switch (ctx->pc) {
        case 0x14f044u: goto label_14f044;
        case 0x14f054u: goto label_14f054;
        case 0x14f080u: goto label_14f080;
        default: break;
    }

    ctx->pc = 0x14f000u;

    // 0x14f000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f004: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14f008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14f00c: 0x24427220  addiu       $v0, $v0, 0x7220
    ctx->pc = 0x14f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29216));
    // 0x14f010: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f018: 0x49180  sll         $s2, $a0, 6
    ctx->pc = 0x14f018u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14f01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f020: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14f024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f028: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14f02c: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x14f02cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14f030: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f034: 0xe7ad0044  swc1        $f13, 0x44($sp)
    ctx->pc = 0x14f034u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14f038: 0xe7ae0048  swc1        $f14, 0x48($sp)
    ctx->pc = 0x14f038u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14f03c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14F03Cu;
    SET_GPR_U32(ctx, 31, 0x14F044u);
    ctx->pc = 0x14F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F03Cu;
    // 0x14f040: 0xe7af004c  swc1        $f15, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14F03Cu, 0x14F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F044u;
label_14f044:
    // 0x14f044: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f048: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f04c: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x14F04Cu;
    SET_GPR_U32(ctx, 31, 0x14F054u);
    ctx->pc = 0x14F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F04Cu;
    // 0x14f050: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x14F04Cu, 0x14F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F054u;
label_14f054:
    // 0x14f054: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14f054u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f060: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14f064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f068: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f06c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14f06cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14f070: 0x0  nop
    ctx->pc = 0x14f070u;
    // NOP
    // 0x14f074: 0x0  nop
    ctx->pc = 0x14f074u;
    // NOP
    // 0x14f078: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x14F078u;
    SET_GPR_U32(ctx, 31, 0x14F080u);
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x14F078u, 0x14F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F080u;
label_14f080:
    // 0x14f080: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14f080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14f084: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x14f088: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14f08c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x14f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x14f090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0A0u;
        // 0x14f0a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F0A8u;
}
