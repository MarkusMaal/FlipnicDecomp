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

// Function: FUN_00169820
// Address: 0x169820 - 0x1698b0
void FUN_00169820_0x169820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169820_0x169820");
#endif

    switch (ctx->pc) {
        case 0x16985cu: goto label_16985c;
        case 0x169898u: goto label_169898;
        default: break;
    }

    ctx->pc = 0x169820u;

    // 0x169820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16982c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169834: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x169834u;
    {
        const bool branch_taken_0x169834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169834u;
        // 0x169838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169834) {
            ctx->pc = 0x169898u;
            goto label_169898;
        }
    }
    ctx->pc = 0x16983Cu;
    // 0x16983c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169840: 0x2442a4f0  addiu       $v0, $v0, -0x5B10
    ctx->pc = 0x169840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x169844: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x169844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x169848: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x16984c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16984Cu;
    {
        const bool branch_taken_0x16984c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16984c) {
            ctx->pc = 0x16985Cu;
            goto label_16985c;
        }
    }
    ctx->pc = 0x169854u;
    // 0x169854: 0xc04be08  jal         func_12F820
    ctx->pc = 0x169854u;
    SET_GPR_U32(ctx, 31, 0x16985Cu);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x169854u, 0x16985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16985Cu;
label_16985c:
    // 0x16985c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16985Cu;
    {
        const bool branch_taken_0x16985c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16985Cu;
        // 0x169860: 0xae200228  sw          $zero, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16985c) {
            ctx->pc = 0x169880u;
            goto label_169880;
        }
    }
    ctx->pc = 0x169864u;
    // 0x169864: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169868: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x16986c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16986Cu;
    {
        const bool branch_taken_0x16986c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16986Cu;
        // 0x169870: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16986c) {
            ctx->pc = 0x169880u;
            goto label_169880;
        }
    }
    ctx->pc = 0x169874u;
    // 0x169874: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169878: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16987c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16987cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_169880:
    // 0x169880: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x169880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x169884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x169884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x169888: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169888u;
    {
        const bool branch_taken_0x169888 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169888u;
        // 0x16988c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169888) {
            ctx->pc = 0x16989Cu;
            goto label_16989c;
        }
    }
    ctx->pc = 0x169890u;
    // 0x169890: 0xc0401a4  jal         func_100690
    ctx->pc = 0x169890u;
    SET_GPR_U32(ctx, 31, 0x169898u);
    ctx->pc = 0x169894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169890u;
    // 0x169894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x169890u, 0x169898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169898u;
label_169898:
    // 0x169898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x169898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16989c:
    // 0x16989c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1698a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1698a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1698a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1698a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1698a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1698A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A8u;
        // 0x1698ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698B0u;
}
