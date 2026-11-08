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

// Function: entry_001ff1f4
// Address: 0x1ff1f4 - 0x1ff244
void entry_001ff1f4_0x1ff1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff1f4_0x1ff1f4");
#endif

    ctx->pc = 0x1ff1f4u;

    // 0x1ff1f4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ff1f8: 0x2687d9c8  addiu       $a3, $s4, -0x2638
    ctx->pc = 0x1ff1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff1fc: 0x475021  addu        $t2, $v0, $a3
    ctx->pc = 0x1ff1fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ff200: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1ff204: 0x552a000f  bnel        $t1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF204u;
    {
        const bool branch_taken_0x1ff204 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x1ff204) {
            ctx->pc = 0x1FF208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF204u;
            // 0x1ff208: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF244u;
            return;
        }
    }
    ctx->pc = 0x1FF20Cu;
    // 0x1ff20c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff210: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ff214: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1ff214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff21c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1ff21cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1ff220: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1ff220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ff224: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1ff224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ff228: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1ff22c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x1ff22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1ff230: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ff230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff234: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ff234u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ff238: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ff238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ff23c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF23Cu;
    {
        const bool branch_taken_0x1ff23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF23Cu;
        // 0x1ff240: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff23c) {
            ctx->pc = 0x1FF290u;
            return;
        }
    }
    ctx->pc = 0x1FF244u;
}
