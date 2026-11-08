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

// Function: entry_001d3d68
// Address: 0x1d3d68 - 0x1d3d9c
void entry_001d3d68_0x1d3d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d68_0x1d3d68");
#endif

    ctx->pc = 0x1d3d68u;

label_1d3d68:
    // 0x1d3d68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d3d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d3d6c: 0xac8bfffc  sw          $t3, -0x4($a0)
    ctx->pc = 0x1d3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 11));
    // 0x1d3d70: 0xac8b0000  sw          $t3, 0x0($a0)
    ctx->pc = 0x1d3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 11));
    // 0x1d3d74: 0x0  nop
    ctx->pc = 0x1d3d74u;
    // NOP
    // 0x1d3d78: 0x0  nop
    ctx->pc = 0x1d3d78u;
    // NOP
    // 0x1d3d7c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3D7Cu;
    {
        const bool branch_taken_0x1d3d7c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D7Cu;
        // 0x1d3d80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d7c) {
            ctx->pc = 0x1D3D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d68;
        }
    }
    ctx->pc = 0x1D3D84u;
    // 0x1d3d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d88: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3d8c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1d3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d90: 0xad4202cc  sw          $v0, 0x2CC($t2)
    ctx->pc = 0x1d3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 716), GPR_U32(ctx, 2));
    // 0x1d3d94: 0x8074eee  j           func_1D3BB8
    ctx->pc = 0x1D3D94u;
    ctx->pc = 0x1D3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D94u;
    // 0x1d3d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BB8u;
    entry_001d3bb8_0x1d3bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D9Cu;
}
