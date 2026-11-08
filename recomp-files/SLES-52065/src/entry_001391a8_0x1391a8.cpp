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

// Function: entry_001391a8
// Address: 0x1391a8 - 0x139220
void entry_001391a8_0x1391a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001391a8_0x1391a8");
#endif

    ctx->pc = 0x1391a8u;

    // 0x1391a8: 0x29210002  slti        $at, $t1, 0x2
    ctx->pc = 0x1391a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1391ac: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1391ACu;
    {
        const bool branch_taken_0x1391ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391ac) {
            ctx->pc = 0x13927Cu;
            return;
        }
    }
    ctx->pc = 0x1391B4u;
    // 0x1391b4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1391b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1391B8u;
    {
        const bool branch_taken_0x1391b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391b8) {
            ctx->pc = 0x139220u;
            return;
        }
    }
    ctx->pc = 0x1391C0u;
    // 0x1391c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1391c4: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1391c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1391c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1391cc: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1391d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1391d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1391d8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1391d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1391dc: 0x24426650  addiu       $v0, $v0, 0x6650
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
    // 0x1391e0: 0x34860104  ori         $a2, $a0, 0x104
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x1391e4: 0x55082  srl         $t2, $a1, 2
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1391e8: 0x3c046e00  lui         $a0, 0x6E00
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28160 << 16));
    // 0x1391ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1391f0: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x1391f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x1391f4: 0x3484c022  ori         $a0, $a0, 0xC022
    ctx->pc = 0x1391f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49186);
    // 0x1391f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1391f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391fc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1391fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x139200: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139204: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x139204u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x139208: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x139208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x13920c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13920cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x139210: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139214: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139218: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x139218u;
    {
        const bool branch_taken_0x139218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139218u;
        // 0x13921c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139218) {
            ctx->pc = 0x13927Cu;
            return;
        }
    }
    ctx->pc = 0x139220u;
}
