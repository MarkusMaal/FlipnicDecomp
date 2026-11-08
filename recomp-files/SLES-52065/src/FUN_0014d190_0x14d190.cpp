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

// Function: FUN_0014d190
// Address: 0x14d190 - 0x14d24c
void FUN_0014d190_0x14d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d190_0x14d190");
#endif

    switch (ctx->pc) {
        case 0x14d1c0u: goto label_14d1c0;
        case 0x14d1f0u: goto label_14d1f0;
        case 0x14d1fcu: goto label_14d1fc;
        case 0x14d238u: goto label_14d238;
        default: break;
    }

    ctx->pc = 0x14d190u;

    // 0x14d190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d1a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1a4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14d1a8: 0xb0082b  sltu        $at, $a1, $s0
    ctx->pc = 0x14d1a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d1ac: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D1ACu;
    {
        const bool branch_taken_0x14d1ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1ACu;
        // 0x14d1b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1ac) {
            ctx->pc = 0x14D204u;
            goto label_14d204;
        }
    }
    ctx->pc = 0x14D1B4u;
    // 0x14d1b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d1b8: 0xc049dd8  jal         func_127760
    ctx->pc = 0x14D1B8u;
    SET_GPR_U32(ctx, 31, 0x14D1C0u);
    ctx->pc = 0x14D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1B8u;
    // 0x14d1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x14D1B8u, 0x14D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1C0u;
label_14d1c0:
    // 0x14d1c0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x14d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x14d1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1c8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x14d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x14d1cc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x14d1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d1d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d1d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d1d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d1dc: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x14d1e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14d1e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d1e8: 0xc0534f0  jal         func_14D3C0
    ctx->pc = 0x14D1E8u;
    SET_GPR_U32(ctx, 31, 0x14D1F0u);
    ctx->pc = 0x14D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1E8u;
    // 0x14d1ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D3C0u, 0x14D1E8u, 0x14D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1F0u;
label_14d1f0:
    // 0x14d1f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d1f4: 0xc048414  jal         func_121050
    ctx->pc = 0x14D1F4u;
    SET_GPR_U32(ctx, 31, 0x14D1FCu);
    ctx->pc = 0x14D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1F4u;
    // 0x14d1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14D1F4u, 0x14D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1FCu;
label_14d1fc:
    // 0x14d1fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D1FCu;
    {
        const bool branch_taken_0x14d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1FCu;
        // 0x14d200: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1fc) {
            ctx->pc = 0x14D23Cu;
            goto label_14d23c;
        }
    }
    ctx->pc = 0x14D204u;
label_14d204:
    // 0x14d204: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x14d204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14d208: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D208u;
    {
        const bool branch_taken_0x14d208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d208) {
            ctx->pc = 0x14D238u;
            goto label_14d238;
        }
    }
    ctx->pc = 0x14D210u;
    // 0x14d210: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d214: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d218: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x14d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d21c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x14d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d224: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14d228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d22c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14d230: 0xc053494  jal         func_14D250
    ctx->pc = 0x14D230u;
    SET_GPR_U32(ctx, 31, 0x14D238u);
    ctx->pc = 0x14D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D230u;
    // 0x14d234: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D250u, 0x14D230u, 0x14D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D238u;
label_14d238:
    // 0x14d238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14d23c:
    // 0x14d23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d244: 0x3e00008  jr          $ra
    ctx->pc = 0x14D244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D244u;
        // 0x14d248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D24Cu;
}
