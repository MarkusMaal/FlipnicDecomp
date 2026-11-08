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

// Function: FUN_001172e0
// Address: 0x1172e0 - 0x117340
void FUN_001172e0_0x1172e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001172e0_0x1172e0");
#endif

    switch (ctx->pc) {
        case 0x11732cu: goto label_11732c;
        default: break;
    }

    ctx->pc = 0x1172e0u;

    // 0x1172e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1172e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1172e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1172e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1172e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1172ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1172ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172f0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1172F0u;
    {
        const bool branch_taken_0x1172f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172F0u;
        // 0x1172f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172f0) {
            ctx->pc = 0x117330u;
            goto label_117330;
        }
    }
    ctx->pc = 0x1172F8u;
    // 0x1172f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1172fc: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x1172fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x117300: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117300u;
    {
        const bool branch_taken_0x117300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117300u;
        // 0x117304: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117300) {
            ctx->pc = 0x117314u;
            goto label_117314;
        }
    }
    ctx->pc = 0x117308u;
    // 0x117308: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x117308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11730c: 0x244285f0  addiu       $v0, $v0, -0x7A10
    ctx->pc = 0x11730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936048));
    // 0x117310: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x117310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_117314:
    // 0x117314: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x117314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x117318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x117318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11731c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11731Cu;
    {
        const bool branch_taken_0x11731c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x117320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11731Cu;
        // 0x117320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11731c) {
            ctx->pc = 0x11732Cu;
            goto label_11732c;
        }
    }
    ctx->pc = 0x117324u;
    // 0x117324: 0xc0401a4  jal         func_100690
    ctx->pc = 0x117324u;
    SET_GPR_U32(ctx, 31, 0x11732Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x117324u, 0x11732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11732Cu;
label_11732c:
    // 0x11732c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11732cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117330:
    // 0x117330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117338: 0x3e00008  jr          $ra
    ctx->pc = 0x117338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117338u;
        // 0x11733c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117340u;
}
