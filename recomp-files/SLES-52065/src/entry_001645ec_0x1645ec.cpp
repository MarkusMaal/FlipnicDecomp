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

// Function: entry_001645ec
// Address: 0x1645ec - 0x164604
void entry_001645ec_0x1645ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645ec_0x1645ec");
#endif

    ctx->pc = 0x1645ecu;

    // 0x1645ec: 0x862301e8  lh          $v1, 0x1E8($s1)
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1645f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1645f4: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1645F4u;
    {
        const bool branch_taken_0x1645f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1645F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645F4u;
        // 0x1645f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645f4) {
            ctx->pc = 0x164718u;
            return;
        }
    }
    ctx->pc = 0x1645FCu;
    // 0x1645fc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1645FCu;
    {
        const bool branch_taken_0x1645fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645FCu;
        // 0x164600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645fc) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164604u;
}
