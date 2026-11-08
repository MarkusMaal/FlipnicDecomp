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

// Function: entry_00209260
// Address: 0x209260 - 0x209288
void entry_00209260_0x209260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209260_0x209260");
#endif

    ctx->pc = 0x209260u;

    // 0x209260: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x209260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x209264: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x209264u;
    {
        const bool branch_taken_0x209264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209264u;
        // 0x209268: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209264) {
            ctx->pc = 0x209290u;
            return;
        }
    }
    ctx->pc = 0x20926Cu;
    // 0x20926c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x209270: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209270u;
    {
        const bool branch_taken_0x209270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x209274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209270u;
        // 0x209274: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209270) {
            ctx->pc = 0x209288u;
            return;
        }
    }
    ctx->pc = 0x209278u;
    // 0x209278: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x209278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x20927c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209280: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x209280u;
    {
        const bool branch_taken_0x209280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209280u;
        // 0x209284: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209280) {
            ctx->pc = 0x2092E8u;
            return;
        }
    }
    ctx->pc = 0x209288u;
}
