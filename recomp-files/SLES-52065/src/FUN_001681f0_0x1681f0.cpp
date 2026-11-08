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

// Function: FUN_001681f0
// Address: 0x1681f0 - 0x168250
void FUN_001681f0_0x1681f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001681f0_0x1681f0");
#endif

    switch (ctx->pc) {
        case 0x16823cu: goto label_16823c;
        default: break;
    }

    ctx->pc = 0x1681f0u;

    // 0x1681f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1681f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1681f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1681f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1681f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1681f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1681fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1681fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168200: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x168200u;
    {
        const bool branch_taken_0x168200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168200u;
        // 0x168204: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168200) {
            ctx->pc = 0x168240u;
            goto label_168240;
        }
    }
    ctx->pc = 0x168208u;
    // 0x168208: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16820c: 0x24429e30  addiu       $v0, $v0, -0x61D0
    ctx->pc = 0x16820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
    // 0x168210: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168210u;
    {
        const bool branch_taken_0x168210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168210u;
        // 0x168214: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168210) {
            ctx->pc = 0x168224u;
            goto label_168224;
        }
    }
    ctx->pc = 0x168218u;
    // 0x168218: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16821c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x168220: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x168220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_168224:
    // 0x168224: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16822c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16822Cu;
    {
        const bool branch_taken_0x16822c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16822Cu;
        // 0x168230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16822c) {
            ctx->pc = 0x16823Cu;
            goto label_16823c;
        }
    }
    ctx->pc = 0x168234u;
    // 0x168234: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168234u;
    SET_GPR_U32(ctx, 31, 0x16823Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168234u, 0x16823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16823Cu;
label_16823c:
    // 0x16823c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16823cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168240:
    // 0x168240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168248: 0x3e00008  jr          $ra
    ctx->pc = 0x168248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168248u;
        // 0x16824c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168250u;
}
