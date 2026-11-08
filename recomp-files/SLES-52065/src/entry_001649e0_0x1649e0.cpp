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

// Function: entry_001649e0
// Address: 0x1649e0 - 0x164a18
void entry_001649e0_0x1649e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001649e0_0x1649e0");
#endif

    ctx->pc = 0x1649e0u;

    // 0x1649e0: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1649e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1649e8: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1649ec: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x1649ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1649f0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1649f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1649f8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1649fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1649FCu;
    {
        const bool branch_taken_0x1649fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649FCu;
        // 0x164a00: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649fc) {
            ctx->pc = 0x164A18u;
            return;
        }
    }
    ctx->pc = 0x164A04u;
    // 0x164a04: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x164a08: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x164a0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164a10: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x164a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164a14: 0x0  nop
    ctx->pc = 0x164a14u;
    // NOP
    ctx->pc = 0x164a18u;
}
