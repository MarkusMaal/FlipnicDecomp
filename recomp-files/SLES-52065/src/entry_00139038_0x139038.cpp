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

// Function: entry_00139038
// Address: 0x139038 - 0x1390ac
void entry_00139038_0x139038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139038_0x139038");
#endif

    ctx->pc = 0x139038u;

    // 0x139038: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13903c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x139040: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x139040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x139044: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x139044u;
    {
        const bool branch_taken_0x139044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139044) {
            ctx->pc = 0x1390ACu;
            return;
        }
    }
    ctx->pc = 0x13904Cu;
    // 0x13904c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x139050: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x139054: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139058: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13905c: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x139060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139064: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139068: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x139068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x13906c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x139070: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139074: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x139074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x139078: 0x65842  srl         $t3, $a2, 1
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x13907c: 0x34aa0104  ori         $t2, $a1, 0x104
    ctx->pc = 0x13907cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)260);
    // 0x139080: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x139080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x139084: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x139084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x139088: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x139088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x13908c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13908cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x139090: 0x34a38020  ori         $v1, $a1, 0x8020
    ctx->pc = 0x139090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32800);
    // 0x139094: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x139094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x139098: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x139098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x13909c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13909cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1390a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1390a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1390a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1390a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1390a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1390acu;
}
