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

// Function: entry_0016746c
// Address: 0x16746c - 0x16749c
void entry_0016746c_0x16746c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016746c_0x16746c");
#endif

    ctx->pc = 0x16746cu;

    // 0x16746c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16746cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167470: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x167474: 0x80820022  lb          $v0, 0x22($a0)
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x167478: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x167478u;
    {
        const bool branch_taken_0x167478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167478u;
        // 0x16747c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167478) {
            ctx->pc = 0x1674BCu;
            return;
        }
    }
    ctx->pc = 0x167480u;
    // 0x167480: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x167480u;
    {
        const bool branch_taken_0x167480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x167484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167480u;
        // 0x167484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167480) {
            ctx->pc = 0x1674ACu;
            return;
        }
    }
    ctx->pc = 0x167488u;
    // 0x167488: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x16748c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16748Cu;
    {
        const bool branch_taken_0x16748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x167490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16748Cu;
        // 0x167490: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16748c) {
            ctx->pc = 0x16749Cu;
            return;
        }
    }
    ctx->pc = 0x167494u;
    // 0x167494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x167494u;
    {
        const bool branch_taken_0x167494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167494) {
            ctx->pc = 0x1674C4u;
            return;
        }
    }
    ctx->pc = 0x16749Cu;
}
