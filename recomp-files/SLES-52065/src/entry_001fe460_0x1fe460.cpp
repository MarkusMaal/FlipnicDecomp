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

// Function: entry_001fe460
// Address: 0x1fe460 - 0x1fe4a0
void entry_001fe460_0x1fe460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe460_0x1fe460");
#endif

    switch (ctx->pc) {
        case 0x1fe480u: goto label_1fe480;
        default: break;
    }

    ctx->pc = 0x1fe460u;

    // 0x1fe460: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1fe460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1fe464: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE464u;
    {
        const bool branch_taken_0x1fe464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE464u;
        // 0x1fe468: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe464) {
            ctx->pc = 0x1FE4A0u;
            return;
        }
    }
    ctx->pc = 0x1FE46Cu;
    // 0x1fe46c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe470: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1fe470u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x1fe474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe478: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1FE478u;
    SET_GPR_U32(ctx, 31, 0x1FE480u);
    ctx->pc = 0x1FE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE478u;
    // 0x1fe47c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE478u, 0x1FE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE480u;
label_1fe480:
    // 0x1fe480: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe488: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe48c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe490: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1fe494: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe498: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE548u;
            return;
        }
    }
    ctx->pc = 0x1FE4A0u;
}
