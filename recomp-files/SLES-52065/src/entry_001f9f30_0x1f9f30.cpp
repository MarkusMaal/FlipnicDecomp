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

// Function: entry_001f9f30
// Address: 0x1f9f30 - 0x1f9f58
void entry_001f9f30_0x1f9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9f30_0x1f9f30");
#endif

    ctx->pc = 0x1f9f30u;

    // 0x1f9f30: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1F9F30u;
    {
        const bool branch_taken_0x1f9f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F30u;
        // 0x1f9f34: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f30) {
            ctx->pc = 0x1F9DF8u;
            return;
        }
    }
    ctx->pc = 0x1F9F38u;
    // 0x1f9f38: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x1f9f3c: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x1f9f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1f9f40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F40u;
    {
        const bool branch_taken_0x1f9f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f40) {
            ctx->pc = 0x1F9F58u;
            return;
        }
    }
    ctx->pc = 0x1F9F48u;
    // 0x1f9f48: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9f4c: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x1f9f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x1f9f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F9F50u;
    {
        const bool branch_taken_0x1f9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F50u;
        // 0x1f9f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f50) {
            ctx->pc = 0x1F9F90u;
            return;
        }
    }
    ctx->pc = 0x1F9F58u;
}
