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

// Function: FUN_0012a4f0
// Address: 0x12a4f0 - 0x12a574
void FUN_0012a4f0_0x12a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a4f0_0x12a4f0");
#endif

    switch (ctx->pc) {
        case 0x12a504u: goto label_12a504;
        default: break;
    }

    ctx->pc = 0x12a4f0u;

    // 0x12a4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a4fc: 0xc04a814  jal         func_12A050
    ctx->pc = 0x12A4FCu;
    SET_GPR_U32(ctx, 31, 0x12A504u);
    ctx->pc = 0x12A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4FCu;
    // 0x12a500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x12A4FCu, 0x12A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A504u;
label_12a504:
    // 0x12a504: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12a504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12a508: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x12a50c: 0x24638b40  addiu       $v1, $v1, -0x74C0
    ctx->pc = 0x12a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937408));
    // 0x12a510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a514: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12a514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12a518: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12a518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12a51c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x12a51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x12a520: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12a520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12a524: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x12a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x12a528: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12a528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12a52c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x12a530: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x12a530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x12a534: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x12a534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x12a538: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a53c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x12a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x12a540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12a540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a544: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x12a544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x12a548: 0x8f848478  lw          $a0, -0x7B88($gp)
    ctx->pc = 0x12a548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x12a54c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12a550: 0xaf848478  sw          $a0, -0x7B88($gp)
    ctx->pc = 0x12a550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U32(ctx, 4));
    // 0x12a554: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x12a554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x12a558: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x12a558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x12a55c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x12a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x12a560: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x12a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x12a564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A56Cu;
        // 0x12a570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A574u;
}
