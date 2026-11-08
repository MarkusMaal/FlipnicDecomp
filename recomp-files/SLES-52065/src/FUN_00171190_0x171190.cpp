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

// Function: FUN_00171190
// Address: 0x171190 - 0x17122c
void FUN_00171190_0x171190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171190_0x171190");
#endif

    switch (ctx->pc) {
        case 0x1711c4u: goto label_1711c4;
        case 0x1711ecu: goto label_1711ec;
        case 0x171214u: goto label_171214;
        default: break;
    }

    ctx->pc = 0x171190u;

    // 0x171190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17119c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1711a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1711a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711a4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1711A4u;
    {
        const bool branch_taken_0x1711a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711A4u;
        // 0x1711a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711a4) {
            ctx->pc = 0x171214u;
            goto label_171214;
        }
    }
    ctx->pc = 0x1711ACu;
    // 0x1711ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1711acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1711b0: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x1711b4: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x1711b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x1711b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1711b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1711bc: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1711BCu;
    SET_GPR_U32(ctx, 31, 0x1711C4u);
    ctx->pc = 0x1711C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711BCu;
    // 0x1711c0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1711BCu, 0x1711C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711C4u;
label_1711c4:
    // 0x1711c4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1711C4u;
    {
        const bool branch_taken_0x1711c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711C4u;
        // 0x1711c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711c4) {
            ctx->pc = 0x171200u;
            goto label_171200;
        }
    }
    ctx->pc = 0x1711CCu;
    // 0x1711cc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1711d0: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x1711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x1711d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1711d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1711d8: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1711dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1711DCu;
    {
        const bool branch_taken_0x1711dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1711dc) {
            ctx->pc = 0x1711ECu;
            goto label_1711ec;
        }
    }
    ctx->pc = 0x1711E4u;
    // 0x1711e4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1711E4u;
    SET_GPR_U32(ctx, 31, 0x1711ECu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1711E4u, 0x1711ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711ECu;
label_1711ec:
    // 0x1711ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1711ECu;
    {
        const bool branch_taken_0x1711ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711ECu;
        // 0x1711f0: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711ec) {
            ctx->pc = 0x1711FCu;
            goto label_1711fc;
        }
    }
    ctx->pc = 0x1711F4u;
    // 0x1711f4: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1711f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1711f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1711f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1711fc:
    // 0x1711fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1711fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_171200:
    // 0x171200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x171200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x171204: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171204u;
    {
        const bool branch_taken_0x171204 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x171208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171204u;
        // 0x171208: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171204) {
            ctx->pc = 0x171218u;
            goto label_171218;
        }
    }
    ctx->pc = 0x17120Cu;
    // 0x17120c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17120Cu;
    SET_GPR_U32(ctx, 31, 0x171214u);
    ctx->pc = 0x171210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17120Cu;
    // 0x171210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17120Cu, 0x171214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171214u;
label_171214:
    // 0x171214: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x171214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171218:
    // 0x171218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17121c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17121cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171224: 0x3e00008  jr          $ra
    ctx->pc = 0x171224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171224u;
        // 0x171228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17122Cu;
}
