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

// Function: entry_00110c24
// Address: 0x110c24 - 0x110c5c
void entry_00110c24_0x110c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c24_0x110c24");
#endif

    ctx->pc = 0x110c24u;

    // 0x110c24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110c28: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x110c2c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110c34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110c38: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110c3c: 0x90440224  lbu         $a0, 0x224($v0)
    ctx->pc = 0x110c3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x110c40: 0x416bc  dsll32      $v0, $a0, 26
    ctx->pc = 0x110c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
    // 0x110c44: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110c48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110C48u;
    {
        const bool branch_taken_0x110c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C48u;
        // 0x110c4c: 0x30820007  andi        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c48) {
            ctx->pc = 0x110C5Cu;
            return;
        }
    }
    ctx->pc = 0x110C50u;
    // 0x110c50: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x110c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x110c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110C54u;
    {
        const bool branch_taken_0x110c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C54u;
        // 0x110c58: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c54) {
            ctx->pc = 0x110C74u;
            return;
        }
    }
    ctx->pc = 0x110C5Cu;
}
