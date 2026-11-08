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

// Function: entry_001983a4
// Address: 0x1983a4 - 0x1983fc
void entry_001983a4_0x1983a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001983a4_0x1983a4");
#endif

    switch (ctx->pc) {
        case 0x1983b8u: goto label_1983b8;
        case 0x1983ccu: goto label_1983cc;
        case 0x1983f4u: goto label_1983f4;
        default: break;
    }

    ctx->pc = 0x1983a4u;

label_1983a4:
    // 0x1983a4: 0x0  nop
    ctx->pc = 0x1983a4u;
    // NOP
label_1983a8:
    // 0x1983a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1983a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1983ac:
    // 0x1983ac: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1983b0:
    // 0x1983b0: 0x320f809  jalr        $t9
label_1983b4:
    if (ctx->pc == 0x1983B4u) {
        ctx->pc = 0x1983B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983B0u;
        // 0x1983b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983B8u;
        goto label_1983b8;
    }
    ctx->pc = 0x1983B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1983B8u);
        ctx->pc = 0x1983B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983B0u;
        // 0x1983b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983B0u, 0x1983B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1983B8u;
label_1983b8:
    // 0x1983b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1983bc:
    // 0x1983bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1983bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1983c0:
    // 0x1983c0: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1983c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1983c4:
    // 0x1983c4: 0x320f809  jalr        $t9
label_1983c8:
    if (ctx->pc == 0x1983C8u) {
        ctx->pc = 0x1983C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983C4u;
        // 0x1983c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983CCu;
        goto label_1983cc;
    }
    ctx->pc = 0x1983C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1983CCu);
        ctx->pc = 0x1983C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983C4u;
        // 0x1983c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983C4u, 0x1983CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1983CCu;
label_1983cc:
    // 0x1983cc: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x1983ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1983d0:
    // 0x1983d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1983d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1983d4:
    // 0x1983d4: 0x0  nop
    ctx->pc = 0x1983d4u;
    // NOP
label_1983d8:
    // 0x1983d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1983d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1983dc:
    // 0x1983dc: 0x0  nop
    ctx->pc = 0x1983dcu;
    // NOP
label_1983e0:
    // 0x1983e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1983e4:
    if (ctx->pc == 0x1983E4u) {
        ctx->pc = 0x1983E8u;
        goto label_1983e8;
    }
    ctx->pc = 0x1983E0u;
    {
        const bool branch_taken_0x1983e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1983e0) {
            ctx->pc = 0x1983FCu;
            return;
        }
    }
    ctx->pc = 0x1983E8u;
label_1983e8:
    // 0x1983e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1983e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1983ec:
    // 0x1983ec: 0xc064c0c  jal         func_193030
label_1983f0:
    if (ctx->pc == 0x1983F0u) {
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983F4u;
        goto label_1983f4;
    }
    ctx->pc = 0x1983ECu;
    SET_GPR_U32(ctx, 31, 0x1983F4u);
    ctx->pc = 0x1983F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983ECu;
    // 0x1983f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1983ECu, 0x1983F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983F4u;
label_1983f4:
    // 0x1983f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1983f8:
    if (ctx->pc == 0x1983F8u) {
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983FCu;
        goto label_fallthrough_0x1983f4;
    }
    ctx->pc = 0x1983F4u;
    {
        const bool branch_taken_0x1983f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f4) {
            ctx->pc = 0x198420u;
            return;
        }
    }
label_fallthrough_0x1983f4:
    ctx->pc = 0x1983FCu;
}
