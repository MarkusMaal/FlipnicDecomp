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

// Function: FUN_00201820
// Address: 0x201820 - 0x201884
void FUN_00201820_0x201820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201820_0x201820");
#endif

    switch (ctx->pc) {
        case 0x201848u: goto label_201848;
        default: break;
    }

    ctx->pc = 0x201820u;

    // 0x201820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201824: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x201824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20182c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20182cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20183c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x201840: 0xc0802b6  jal         func_200AD8
    ctx->pc = 0x201840u;
    SET_GPR_U32(ctx, 31, 0x201848u);
    ctx->pc = 0x201844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201840u;
    // 0x201844: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AD8u, 0x201840u, 0x201848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20184c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20184cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x201850: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201850u;
    {
        const bool branch_taken_0x201850 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x201850) {
            ctx->pc = 0x201854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201850u;
            // 0x201854: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201868u;
            goto label_201868;
        }
    }
    ctx->pc = 0x201858u;
    // 0x201858: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20185c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201860u;
    {
        const bool branch_taken_0x201860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201860u;
        // 0x201864: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201860) {
            ctx->pc = 0x201870u;
            goto label_201870;
        }
    }
    ctx->pc = 0x201868u;
label_201868:
    // 0x201868: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x201868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x20186c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x20186cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_201870:
    // 0x201870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201874: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x201874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20187c: 0x3e00008  jr          $ra
    ctx->pc = 0x20187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20187Cu;
        // 0x201880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201884u;
}
