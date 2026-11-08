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

// Function: entry_001fc514
// Address: 0x1fc514 - 0x1fc550
void entry_001fc514_0x1fc514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc514_0x1fc514");
#endif

    switch (ctx->pc) {
        case 0x1fc540u: goto label_1fc540;
        default: break;
    }

    ctx->pc = 0x1fc514u;

    // 0x1fc514: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1fc514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1fc518: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x1fc518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1fc51c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC51Cu;
    {
        const bool branch_taken_0x1fc51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC51Cu;
        // 0x1fc520: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc51c) {
            ctx->pc = 0x1FC550u;
            return;
        }
    }
    ctx->pc = 0x1FC524u;
    // 0x1fc524: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1fc528: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fc52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc534: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1fc534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1fc538: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC538u;
    SET_GPR_U32(ctx, 31, 0x1FC540u);
    ctx->pc = 0x1FC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC538u;
    // 0x1fc53c: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC538u, 0x1FC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC540u;
label_1fc540:
    // 0x1fc540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc544: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1fc544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc548: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fc548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc54c: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1fc54cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    ctx->pc = 0x1fc550u;
}
