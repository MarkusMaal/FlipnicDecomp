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

// Function: entry_00187bc0
// Address: 0x187bc0 - 0x187bec
void entry_00187bc0_0x187bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187bc0_0x187bc0");
#endif

    ctx->pc = 0x187bc0u;

    // 0x187bc0: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187bc4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x187bc8: 0x14a4001f  bne         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x187BC8u;
    {
        const bool branch_taken_0x187bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187bc8) {
            ctx->pc = 0x187C48u;
            return;
        }
    }
    ctx->pc = 0x187BD0u;
    // 0x187bd0: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x187bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187bd4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x187bd8: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187BD8u;
    {
        const bool branch_taken_0x187bd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187bd8) {
            ctx->pc = 0x187BECu;
            return;
        }
    }
    ctx->pc = 0x187BE0u;
    // 0x187be0: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x187be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x187be4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187BE4u;
    {
        const bool branch_taken_0x187be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BE4u;
        // 0x187be8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187be4) {
            ctx->pc = 0x187C48u;
            return;
        }
    }
    ctx->pc = 0x187BECu;
}
