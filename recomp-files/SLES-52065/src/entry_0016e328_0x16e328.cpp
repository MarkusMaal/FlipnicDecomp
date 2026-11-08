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

// Function: entry_0016e328
// Address: 0x16e328 - 0x16e36c
void entry_0016e328_0x16e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e328_0x16e328");
#endif

    switch (ctx->pc) {
        case 0x16e350u: goto label_16e350;
        default: break;
    }

    ctx->pc = 0x16e328u;

    // 0x16e328: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e32c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e330: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x16e330u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x16e334: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E36Cu;
            return;
        }
    }
    ctx->pc = 0x16E33Cu;
    // 0x16e33c: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16e340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16e344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e348: 0xc046744  jal         func_119D10
    ctx->pc = 0x16E348u;
    SET_GPR_U32(ctx, 31, 0x16E350u);
    ctx->pc = 0x16E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E348u;
    // 0x16e34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x16E348u, 0x16E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E350u;
label_16e350:
    // 0x16e350: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e354: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e358: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e35c: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x16e35cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e360: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e364: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e368: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x16e368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x16e36cu;
}
