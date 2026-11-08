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

// Function: entry_001f9df8
// Address: 0x1f9df8 - 0x1f9e20
void entry_001f9df8_0x1f9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9df8_0x1f9df8");
#endif

    ctx->pc = 0x1f9df8u;

    // 0x1f9df8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f9df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9dfc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e04: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1F9E04u;
    {
        const bool branch_taken_0x1f9e04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E04u;
        // 0x1f9e08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e04) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9E0Cu;
    // 0x1f9e0c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1f9e10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e18: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1F9E18u;
    {
        const bool branch_taken_0x1f9e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E18u;
        // 0x1f9e1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e18) {
            ctx->pc = 0x1FA028u;
            return;
        }
    }
    ctx->pc = 0x1F9E20u;
}
