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

// Function: entry_00112548
// Address: 0x112548 - 0x112578
void entry_00112548_0x112548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112548_0x112548");
#endif

    ctx->pc = 0x112548u;

    // 0x112548: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11254c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x112550: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112558: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11255c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112560: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x112560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x112564: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x112564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x112568: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112568u;
    {
        const bool branch_taken_0x112568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112568u;
        // 0x11256c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112568) {
            ctx->pc = 0x112578u;
            return;
        }
    }
    ctx->pc = 0x112570u;
    // 0x112570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112570u;
    {
        const bool branch_taken_0x112570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112570) {
            ctx->pc = 0x11258Cu;
            return;
        }
    }
    ctx->pc = 0x112578u;
}
