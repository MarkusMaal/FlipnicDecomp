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

// Function: entry_00200da0
// Address: 0x200da0 - 0x200dd4
void entry_00200da0_0x200da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200da0_0x200da0");
#endif

    ctx->pc = 0x200da0u;

    // 0x200da0: 0x2f61023  subu        $v0, $s7, $s6
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x200da4: 0x2962821  addu        $a1, $s4, $s6
    ctx->pc = 0x200da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x200da8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x200da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x200dac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x200dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x200db0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x200db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x200db4: 0x2483d9c8  addiu       $v1, $a0, -0x2638
    ctx->pc = 0x200db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957512));
    // 0x200db8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dbc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x200dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D9D0u, _value); } while (0);
    // 0x200dc0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x200dc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200dc8: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x200dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x200dcc: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x200DCCu;
    {
        const bool branch_taken_0x200dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DCCu;
        // 0x200dd0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200dcc) {
            ctx->pc = 0x20106Cu;
            return;
        }
    }
    ctx->pc = 0x200DD4u;
}
