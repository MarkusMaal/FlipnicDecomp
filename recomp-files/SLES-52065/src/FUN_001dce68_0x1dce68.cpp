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

// Function: FUN_001dce68
// Address: 0x1dce68 - 0x1dceb4
void FUN_001dce68_0x1dce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dce68_0x1dce68");
#endif

    ctx->pc = 0x1dce68u;

    // 0x1dce68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dce68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dce70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dce74: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1dce74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dce7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dce80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dce80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dce84: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1dce84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dce8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dce94: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1dce94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dce9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcea0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dcea4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1dcea4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1dcea8: 0xac287394  sw          $t0, 0x7394($at)
    ctx->pc = 0x1dcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29588), GPR_U32(ctx, 8));
    // 0x1dceac: 0x80762f0  j           func_1D8BC0
    ctx->pc = 0x1DCEACu;
    ctx->pc = 0x1DCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCEACu;
    // 0x1dceb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    FUN_001d8bc0_0x1d8bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCEB4u;
}
