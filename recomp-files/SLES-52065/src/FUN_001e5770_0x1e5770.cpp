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

// Function: FUN_001e5770
// Address: 0x1e5770 - 0x1e5824
void FUN_001e5770_0x1e5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5770_0x1e5770");
#endif

    switch (ctx->pc) {
        case 0x1e57a8u: goto label_1e57a8;
        case 0x1e57f4u: goto label_1e57f4;
        default: break;
    }

    ctx->pc = 0x1e5770u;

    // 0x1e5770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e5778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e577c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5788: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1e5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e578c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5790: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5794: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5798: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5798u;
    {
        const bool branch_taken_0x1e5798 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5798u;
        // 0x1e579c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5798) {
            ctx->pc = 0x1E57B0u;
            goto label_1e57b0;
        }
    }
    ctx->pc = 0x1E57A0u;
    // 0x1e57a0: 0xc080490  jal         func_201240
    ctx->pc = 0x1E57A0u;
    SET_GPR_U32(ctx, 31, 0x1E57A8u);
    ctx->pc = 0x1E57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57A0u;
    // 0x1e57a4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E57A0u, 0x1E57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57A8u;
label_1e57a8:
    // 0x1e57a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E57A8u;
    {
        const bool branch_taken_0x1e57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57A8u;
        // 0x1e57ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57a8) {
            ctx->pc = 0x1E57CCu;
            goto label_1e57cc;
        }
    }
    ctx->pc = 0x1E57B0u;
label_1e57b0:
    // 0x1e57b0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e57b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e57b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e57bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e57c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e57c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e57c4: 0x0  nop
    ctx->pc = 0x1e57c4u;
    // NOP
    // 0x1e57c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e57c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e57cc:
    // 0x1e57cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e57d0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E57D0u;
    {
        const bool branch_taken_0x1e57d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e57d0) {
            ctx->pc = 0x1E57E0u;
            goto label_1e57e0;
        }
    }
    ctx->pc = 0x1E57D8u;
    // 0x1e57d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D8u;
        // 0x1e57dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E57E0u;
label_1e57e0:
    // 0x1e57e0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E57E0u;
    {
        const bool branch_taken_0x1e57e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57E0u;
        // 0x1e57e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57e0) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E57E8u;
    // 0x1e57e8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e57e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e57ec: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E57ECu;
    SET_GPR_U32(ctx, 31, 0x1E57F4u);
    ctx->pc = 0x1E57F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57ECu;
    // 0x1e57f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E57ECu, 0x1E57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57F4u;
label_1e57f4:
    // 0x1e57f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e57f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E57F8u;
    {
        const bool branch_taken_0x1e57f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e57f8) {
            ctx->pc = 0x1E5808u;
            goto label_1e5808;
        }
    }
    ctx->pc = 0x1E5800u;
    // 0x1e5800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5800u;
    {
        const bool branch_taken_0x1e5800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5800u;
        // 0x1e5804: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5800) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E5808u;
label_1e5808:
    // 0x1e5808: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e5808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e580c:
    // 0x1e580c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5810:
    // 0x1e5810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e581c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E581Cu;
        // 0x1e5820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5824u;
}
