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

// Function: entry_00206604
// Address: 0x206604 - 0x206620
void entry_00206604_0x206604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206604_0x206604");
#endif

    ctx->pc = 0x206604u;

    // 0x206604: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x206604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206608u;
    {
        const bool branch_taken_0x206608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206608u;
        // 0x20660c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206608) {
            ctx->pc = 0x206620u;
            return;
        }
    }
    ctx->pc = 0x206610u;
    // 0x206610: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x206610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206614: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206618u;
    {
        const bool branch_taken_0x206618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206618u;
        // 0x20661c: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206618) {
            ctx->pc = 0x206638u;
            return;
        }
    }
    ctx->pc = 0x206620u;
}
