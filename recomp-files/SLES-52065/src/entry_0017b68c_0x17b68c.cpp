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

// Function: entry_0017b68c
// Address: 0x17b68c - 0x17b6fc
void entry_0017b68c_0x17b68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b68c_0x17b68c");
#endif

    switch (ctx->pc) {
        case 0x17b6b0u: goto label_17b6b0;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6f4u: goto label_17b6f4;
        default: break;
    }

    ctx->pc = 0x17b68cu;

label_17b68c:
    // 0x17b68c: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x17b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b690:
    // 0x17b690: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17b690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_17b694:
    // 0x17b694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b698:
    // 0x17b698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b69c:
    // 0x17b69c: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x17b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_17b6a0:
    // 0x17b6a0: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x17b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6a4:
    // 0x17b6a4: 0x246401e0  addiu       $a0, $v1, 0x1E0
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_17b6a8:
    // 0x17b6a8: 0xc054d0c  jal         func_153430
label_17b6ac:
    if (ctx->pc == 0x17B6ACu) {
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6B0u;
        goto label_17b6b0;
    }
    ctx->pc = 0x17B6A8u;
    SET_GPR_U32(ctx, 31, 0x17B6B0u);
    ctx->pc = 0x17B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6A8u;
    // 0x17b6ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x17B6A8u, 0x17B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6B0u;
label_17b6b0:
    // 0x17b6b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17b6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b6b4:
    // 0x17b6b4: 0x0  nop
    ctx->pc = 0x17b6b4u;
    // NOP
label_17b6b8:
    // 0x17b6b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b6bc:
    // 0x17b6bc: 0x0  nop
    ctx->pc = 0x17b6bcu;
    // NOP
label_17b6c0:
    // 0x17b6c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_17b6c4:
    if (ctx->pc == 0x17B6C4u) {
        ctx->pc = 0x17B6C8u;
        goto label_17b6c8;
    }
    ctx->pc = 0x17B6C0u;
    {
        const bool branch_taken_0x17b6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b6c0) {
            ctx->pc = 0x17B6FCu;
            return;
        }
    }
    ctx->pc = 0x17B6C8u;
label_17b6c8:
    // 0x17b6c8: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b6cc:
    // 0x17b6cc: 0xc05efc8  jal         func_17BF20
label_17b6d0:
    if (ctx->pc == 0x17B6D0u) {
        ctx->pc = 0x17B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6CCu;
        // 0x17b6d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6D4u;
        goto label_17b6d4;
    }
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6CCu;
    // 0x17b6d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF20u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17b6d8:
    // 0x17b6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b6dc:
    // 0x17b6dc: 0xae0203d0  sw          $v0, 0x3D0($s0)
    ctx->pc = 0x17b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 2));
label_17b6e0:
    // 0x17b6e0: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b6e4:
    // 0x17b6e4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b6e8:
    // 0x17b6e8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x17b6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_17b6ec:
    // 0x17b6ec: 0x320f809  jalr        $t9
label_17b6f0:
    if (ctx->pc == 0x17B6F0u) {
        ctx->pc = 0x17B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6ECu;
        // 0x17b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6F4u;
        goto label_17b6f4;
    }
    ctx->pc = 0x17B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B6F4u);
        ctx->pc = 0x17B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6ECu;
        // 0x17b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6ECu, 0x17B6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B6F4u;
label_17b6f4:
    // 0x17b6f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_17b6f8:
    if (ctx->pc == 0x17B6F8u) {
        ctx->pc = 0x17B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6F4u;
        // 0x17b6f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6FCu;
        goto label_fallthrough_0x17b6f4;
    }
    ctx->pc = 0x17B6F4u;
    {
        const bool branch_taken_0x17b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6F4u;
        // 0x17b6f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6f4) {
            ctx->pc = 0x17B728u;
            return;
        }
    }
label_fallthrough_0x17b6f4:
    ctx->pc = 0x17B6FCu;
}
