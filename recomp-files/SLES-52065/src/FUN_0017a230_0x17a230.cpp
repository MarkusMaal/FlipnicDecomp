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

// Function: FUN_0017a230
// Address: 0x17a230 - 0x17a2e0
void FUN_0017a230_0x17a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a230_0x17a230");
#endif

    switch (ctx->pc) {
        case 0x17a248u: goto label_17a248;
        case 0x17a258u: goto label_17a258;
        case 0x17a270u: goto label_17a270;
        case 0x17a298u: goto label_17a298;
        case 0x17a2c0u: goto label_17a2c0;
        case 0x17a2ccu: goto label_17a2cc;
        default: break;
    }

    ctx->pc = 0x17a230u;

    // 0x17a230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a240: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x17A240u;
    SET_GPR_U32(ctx, 31, 0x17A248u);
    ctx->pc = 0x17A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A240u;
    // 0x17a244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17A240u, 0x17A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A248u;
label_17a248:
    // 0x17a248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a24c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a250: 0xc042570  jal         func_1095C0
    ctx->pc = 0x17A250u;
    SET_GPR_U32(ctx, 31, 0x17A258u);
    ctx->pc = 0x17A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A250u;
    // 0x17a254: 0xa20001d0  sb          $zero, 0x1D0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x17A250u, 0x17A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A258u;
label_17a258:
    // 0x17a258: 0xae000424  sw          $zero, 0x424($s0)
    ctx->pc = 0x17a258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 0));
    // 0x17a25c: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a260: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17A260u;
    {
        const bool branch_taken_0x17a260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a260) {
            ctx->pc = 0x17A2CCu;
            goto label_17a2cc;
        }
    }
    ctx->pc = 0x17A268u;
    // 0x17a268: 0xc05c9ac  jal         func_1726B0
    ctx->pc = 0x17A268u;
    SET_GPR_U32(ctx, 31, 0x17A270u);
    ctx->pc = 0x1726B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726B0u, 0x17A268u, 0x17A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A270u;
label_17a270:
    // 0x17a270: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x17a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x17a274: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x17a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a278: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x17a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x17a27c: 0xac826024  sw          $v0, 0x6024($a0)
    ctx->pc = 0x17a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24612), GPR_U32(ctx, 2));
    // 0x17a280: 0xac836028  sw          $v1, 0x6028($a0)
    ctx->pc = 0x17a280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24616), GPR_U32(ctx, 3));
    // 0x17a284: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a288: 0xac40602c  sw          $zero, 0x602C($v0)
    ctx->pc = 0x17a288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24620), GPR_U32(ctx, 0));
    // 0x17a28c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17a290: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x17A290u;
    SET_GPR_U32(ctx, 31, 0x17A298u);
    ctx->pc = 0x17A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A290u;
    // 0x17a294: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x17A290u, 0x17A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A298u;
label_17a298:
    // 0x17a298: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x17a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a29c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x17a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x17a2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a2a4: 0x8f908630  lw          $s0, -0x79D0($gp)
    ctx->pc = 0x17a2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a2a8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x17a2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17a2ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17a2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a2b4: 0x26041460  addiu       $a0, $s0, 0x1460
    ctx->pc = 0x17a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5216));
    // 0x17a2b8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17A2B8u;
    SET_GPR_U32(ctx, 31, 0x17A2C0u);
    ctx->pc = 0x17A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2B8u;
    // 0x17a2bc: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A2B8u, 0x17A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2C0u;
label_17a2c0:
    // 0x17a2c0: 0x26041470  addiu       $a0, $s0, 0x1470
    ctx->pc = 0x17a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
    // 0x17a2c4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17A2C4u;
    SET_GPR_U32(ctx, 31, 0x17A2CCu);
    ctx->pc = 0x17A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2C4u;
    // 0x17a2c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A2C4u, 0x17A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2CCu;
label_17a2cc:
    // 0x17a2cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D8u;
        // 0x17a2dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A2E0u;
}
