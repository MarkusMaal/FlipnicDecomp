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

// Function: entry_001ee574
// Address: 0x1ee574 - 0x1ee5a8
void entry_001ee574_0x1ee574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee574_0x1ee574");
#endif

    ctx->pc = 0x1ee574u;

    // 0x1ee574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ee574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee578: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee57c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee580: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1ee584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ee584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee588: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee58c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee59c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee59cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5a0: 0x807b714  j           func_1EDC50
    ctx->pc = 0x1EE5A0u;
    ctx->pc = 0x1EE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5A0u;
    // 0x1ee5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC50u;
    FUN_001edc50_0x1edc50(rdram, ctx, runtime); return;
    ctx->pc = 0x1EE5A8u;
}
