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

// Function: entry_00200618
// Address: 0x200618 - 0x200644
void entry_00200618_0x200618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200618_0x200618");
#endif

    ctx->pc = 0x200618u;

    // 0x200618: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x200618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20061c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x200620: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x200624: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x200624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x200628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200628u;
    {
        const bool branch_taken_0x200628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200628u;
        // 0x20062c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200628) {
            ctx->pc = 0x200644u;
            return;
        }
    }
    ctx->pc = 0x200630u;
    // 0x200630: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x200634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200638: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20063c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20063Cu;
    {
        const bool branch_taken_0x20063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20063Cu;
        // 0x200640: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20063c) {
            ctx->pc = 0x200648u;
            return;
        }
    }
    ctx->pc = 0x200644u;
}
