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

// Function: entry_00161ae8
// Address: 0x161ae8 - 0x161b10
void entry_00161ae8_0x161ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161ae8_0x161ae8");
#endif

    ctx->pc = 0x161ae8u;

    // 0x161ae8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x161ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161aec: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x161aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161af0: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x161AF0u;
    {
        const bool branch_taken_0x161af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x161AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF0u;
        // 0x161af4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161af0) {
            ctx->pc = 0x161B30u;
            return;
        }
    }
    ctx->pc = 0x161AF8u;
    // 0x161af8: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161afc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161AFCu;
    {
        const bool branch_taken_0x161afc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x161B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AFCu;
        // 0x161b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161afc) {
            ctx->pc = 0x161B10u;
            return;
        }
    }
    ctx->pc = 0x161B04u;
    // 0x161b04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B08u;
    {
        const bool branch_taken_0x161b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B08u;
        // 0x161b0c: 0xa203021c  sb          $v1, 0x21C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b08) {
            ctx->pc = 0x161B14u;
            return;
        }
    }
    ctx->pc = 0x161B10u;
}
