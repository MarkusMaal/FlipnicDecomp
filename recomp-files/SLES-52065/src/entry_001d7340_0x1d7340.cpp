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

// Function: entry_001d7340
// Address: 0x1d7340 - 0x1d737c
void entry_001d7340_0x1d7340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7340_0x1d7340");
#endif

    switch (ctx->pc) {
        case 0x1d7374u: goto label_1d7374;
        default: break;
    }

    ctx->pc = 0x1d7340u;

    // 0x1d7340: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7344: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7348: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d734c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D734Cu;
    {
        const bool branch_taken_0x1d734c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D734Cu;
        // 0x1d7350: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d734c) {
            ctx->pc = 0x1D737Cu;
            return;
        }
    }
    ctx->pc = 0x1D7354u;
    // 0x1d7354: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1d7358: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d735c: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1d7360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7368: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1d7368u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d736c: 0xc077546  jal         func_1DD518
    ctx->pc = 0x1D736Cu;
    SET_GPR_U32(ctx, 31, 0x1D7374u);
    ctx->pc = 0x1D7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D736Cu;
    // 0x1d7370: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD518u, 0x1D736Cu, 0x1D7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7374u;
label_1d7374:
    // 0x1d7374: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d7374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7378: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d7378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    ctx->pc = 0x1d737cu;
}
