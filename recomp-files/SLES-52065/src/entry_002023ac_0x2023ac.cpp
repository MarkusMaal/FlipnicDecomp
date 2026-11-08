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

// Function: entry_002023ac
// Address: 0x2023ac - 0x2023d0
void entry_002023ac_0x2023ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002023ac_0x2023ac");
#endif

    ctx->pc = 0x2023acu;

    // 0x2023ac: 0x14820053  bne         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2023ACu;
    {
        const bool branch_taken_0x2023ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2023B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023ACu;
        // 0x2023b0: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023ac) {
            ctx->pc = 0x2024FCu;
            return;
        }
    }
    ctx->pc = 0x2023B4u;
    // 0x2023b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2023b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2023b8: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2023B8u;
    {
        const bool branch_taken_0x2023b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2023BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B8u;
        // 0x2023bc: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b8) {
            ctx->pc = 0x202410u;
            return;
        }
    }
    ctx->pc = 0x2023C0u;
    // 0x2023c0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2023c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2023c4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2023C4u;
    {
        const bool branch_taken_0x2023c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2023c4) {
            ctx->pc = 0x2023C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2023C4u;
            // 0x2023c8: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2023F0u;
            return;
        }
    }
    ctx->pc = 0x2023CCu;
    // 0x2023cc: 0x0  nop
    ctx->pc = 0x2023ccu;
    // NOP
    ctx->pc = 0x2023d0u;
}
