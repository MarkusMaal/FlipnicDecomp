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

// Function: FUN_001dd418
// Address: 0x1dd418 - 0x1dd470
void FUN_001dd418_0x1dd418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd418_0x1dd418");
#endif

    ctx->pc = 0x1dd418u;

    // 0x1dd418: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd41c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd420: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd428: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd434: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x1dd434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dd438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd43c: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x1dd43cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1dd440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd448: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd44c: 0x24217390  addiu       $at, $at, 0x7390
    ctx->pc = 0x1dd44cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29584));
    // 0x1dd450: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1dd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1dd454: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd458: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dd458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd45c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1dd45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd460: 0xa448000a  sh          $t0, 0xA($v0)
    ctx->pc = 0x1dd460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dd464: 0xa4490008  sh          $t1, 0x8($v0)
    ctx->pc = 0x1dd464u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x1dd468: 0x80762f0  j           func_1D8BC0
    ctx->pc = 0x1DD468u;
    ctx->pc = 0x1DD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD468u;
    // 0x1dd46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    FUN_001d8bc0_0x1d8bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD470u;
}
