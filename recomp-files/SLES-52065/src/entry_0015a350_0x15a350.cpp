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

// Function: entry_0015a350
// Address: 0x15a350 - 0x15a380
void entry_0015a350_0x15a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a350_0x15a350");
#endif

    switch (ctx->pc) {
        case 0x15a37cu: goto label_15a37c;
        default: break;
    }

    ctx->pc = 0x15a350u;

    // 0x15a350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a354: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A354u;
    {
        const bool branch_taken_0x15a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A354u;
        // 0x15a358: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a354) {
            ctx->pc = 0x15A380u;
            return;
        }
    }
    ctx->pc = 0x15A35Cu;
    // 0x15a35c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15a360: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15a364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15a364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15a368: 0xa60301ea  sh          $v1, 0x1EA($s0)
    ctx->pc = 0x15a368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a36c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a370: 0x8045002b  lb          $a1, 0x2B($v0)
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x15a374: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15A374u;
    SET_GPR_U32(ctx, 31, 0x15A37Cu);
    ctx->pc = 0x15A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A374u;
    // 0x15a378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15A374u, 0x15A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A37Cu;
label_15a37c:
    // 0x15a37c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15a380u;
}
