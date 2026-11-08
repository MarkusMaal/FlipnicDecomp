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

// Function: entry_0016e4fc
// Address: 0x16e4fc - 0x16e558
void entry_0016e4fc_0x16e4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e4fc_0x16e4fc");
#endif

    switch (ctx->pc) {
        case 0x16e530u: goto label_16e530;
        default: break;
    }

    ctx->pc = 0x16e4fcu;

    // 0x16e4fc: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e500: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16e504: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16e508: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e50c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e510: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x16e510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x16e514: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16E514u;
    {
        const bool branch_taken_0x16e514 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x16e514) {
            ctx->pc = 0x16E558u;
            return;
        }
    }
    ctx->pc = 0x16E51Cu;
    // 0x16e51c: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16e520: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16e524: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e528: 0xc046744  jal         func_119D10
    ctx->pc = 0x16E528u;
    SET_GPR_U32(ctx, 31, 0x16E530u);
    ctx->pc = 0x16E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E528u;
    // 0x16e52c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x16E528u, 0x16E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E530u;
label_16e530:
    // 0x16e530: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16e530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e534: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16e538: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16e53c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e540: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e544: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16e548: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x16e548u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e54c: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e550: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16e554: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x16e554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x16e558u;
}
