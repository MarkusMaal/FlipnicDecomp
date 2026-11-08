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

// Function: entry_0020a804
// Address: 0x20a804 - 0x20a850
void entry_0020a804_0x20a804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a804_0x20a804");
#endif

    ctx->pc = 0x20a804u;

    // 0x20a804: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x20a804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20a808: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a80c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x20a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x20a810: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x20a814: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x20a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x20a818: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x20a818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x20a81c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20a820: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20a824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a828: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20a828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20a82c: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A82Cu;
    {
        const bool branch_taken_0x20a82c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A82Cu;
        // 0x20a830: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a82c) {
            ctx->pc = 0x20A864u;
            return;
        }
    }
    ctx->pc = 0x20A834u;
    // 0x20a834: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20a83c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x20a840: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x20a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x20a844: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x20a844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x20a848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A848u;
        // 0x20a84c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A874u;
            return;
        }
    }
    ctx->pc = 0x20A850u;
}
