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

// Function: entry_001ac3f8
// Address: 0x1ac3f8 - 0x1ac46c
void entry_001ac3f8_0x1ac3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac3f8_0x1ac3f8");
#endif

    switch (ctx->pc) {
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac45cu: goto label_1ac45c;
        default: break;
    }

    ctx->pc = 0x1ac3f8u;

    // 0x1ac3f8: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ac3fc: 0x26950670  addiu       $s5, $s4, 0x670
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    // 0x1ac400: 0xc06b2c0  jal         func_1ACB00
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x1AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC400u;
    // 0x1ac404: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACB00u, 0x1AC400u, 0x1AC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC408u;
    {
        const bool branch_taken_0x1ac408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC408u;
        // 0x1ac40c: 0x3a430001  xori        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac408) {
            ctx->pc = 0x1AC46Cu;
            return;
        }
    }
    ctx->pc = 0x1AC410u;
    // 0x1ac410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac41c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ac420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ac428: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac42c: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1ac430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac434: 0xc06b2b4  jal         func_1ACAD0
    ctx->pc = 0x1AC434u;
    SET_GPR_U32(ctx, 31, 0x1AC43Cu);
    ctx->pc = 0x1AC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC434u;
    // 0x1ac438: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACAD0u, 0x1AC434u, 0x1AC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC43Cu;
label_1ac43c:
    // 0x1ac43c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AC43Cu;
    SET_GPR_U32(ctx, 31, 0x1AC444u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC43Cu, 0x1AC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC444u;
label_1ac444:
    // 0x1ac444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac448: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x1ac44c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AC44Cu;
    SET_GPR_U32(ctx, 31, 0x1AC454u);
    ctx->pc = 0x1AC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC44Cu;
    // 0x1ac450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC44Cu, 0x1AC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC454u;
label_1ac454:
    // 0x1ac454: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AC454u;
    SET_GPR_U32(ctx, 31, 0x1AC45Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC454u, 0x1AC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC45Cu;
label_1ac45c:
    // 0x1ac45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac460: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x1ac460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x1ac464: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AC464u;
    SET_GPR_U32(ctx, 31, 0x1AC46Cu);
    ctx->pc = 0x1AC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC464u;
    // 0x1ac468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC464u, 0x1AC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC46Cu;
}
