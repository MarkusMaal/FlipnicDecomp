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

// Function: entry_00108188
// Address: 0x108188 - 0x10820c
void entry_00108188_0x108188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108188_0x108188");
#endif

    switch (ctx->pc) {
        case 0x108204u: goto label_108204;
        default: break;
    }

    ctx->pc = 0x108188u;

    // 0x108188: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x108188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10818c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108190: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x108190u;
    {
        const bool branch_taken_0x108190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108190u;
        // 0x108194: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108190) {
            ctx->pc = 0x10820Cu;
            return;
        }
    }
    ctx->pc = 0x108198u;
    // 0x108198: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10819c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1081a4: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1081a8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081ac: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1081b0: 0x2442fd94  addiu       $v0, $v0, -0x26C
    ctx->pc = 0x1081b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966676));
    // 0x1081b4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1081b8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1081b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081bc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081c0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1081c4: 0x2442fd98  addiu       $v0, $v0, -0x268
    ctx->pc = 0x1081c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966680));
    // 0x1081c8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1081c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1081cc: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081d0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081d4: 0x2442fda4  addiu       $v0, $v0, -0x25C
    ctx->pc = 0x1081d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966692));
    // 0x1081d8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1081d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081dc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1081e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1081e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1081e4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1081e8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1081e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1081ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1081f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1081f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1081f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1081f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1081fc: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1081FCu;
    SET_GPR_U32(ctx, 31, 0x108204u);
    ctx->pc = 0x108200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1081FCu;
    // 0x108200: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1081FCu, 0x108204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108204u;
label_108204:
    // 0x108204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108204u;
    {
        const bool branch_taken_0x108204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108204u;
        // 0x108208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108204) {
            ctx->pc = 0x108220u;
            return;
        }
    }
    ctx->pc = 0x10820Cu;
}
