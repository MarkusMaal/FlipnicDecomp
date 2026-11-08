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

// Function: entry_0010e1e0
// Address: 0x10e1e0 - 0x10e250
void entry_0010e1e0_0x10e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e1e0_0x10e1e0");
#endif

    switch (ctx->pc) {
        case 0x10e214u: goto label_10e214;
        case 0x10e244u: goto label_10e244;
        default: break;
    }

    ctx->pc = 0x10e1e0u;

    // 0x10e1e0: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x10e1e4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e1e8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x10e1ec: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e1f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10e1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e1f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x10e1fc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x10e200: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e204: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E204u;
    {
        const bool branch_taken_0x10e204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E204u;
        // 0x10e208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e204) {
            ctx->pc = 0x10E250u;
            return;
        }
    }
    ctx->pc = 0x10E20Cu;
    // 0x10e20c: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10E20Cu;
    SET_GPR_U32(ctx, 31, 0x10E214u);
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10E20Cu, 0x10E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E214u;
label_10e214:
    // 0x10e214: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x10e218: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x10e21c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10e220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e224: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e228: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x10e228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x10e22c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10e234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e238: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10e23c: 0xc042584  jal         func_109610
    ctx->pc = 0x10E23Cu;
    SET_GPR_U32(ctx, 31, 0x10E244u);
    ctx->pc = 0x10E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E23Cu;
    // 0x10e240: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E23Cu, 0x10E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E244u;
label_10e244:
    // 0x10e244: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x10e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x10e248: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10e248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10e24c: 0xae030230  sw          $v1, 0x230($s0)
    ctx->pc = 0x10e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 3));
    ctx->pc = 0x10e250u;
}
