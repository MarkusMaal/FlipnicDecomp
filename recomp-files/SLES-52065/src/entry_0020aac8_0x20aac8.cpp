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

// Function: entry_0020aac8
// Address: 0x20aac8 - 0x20ab04
void entry_0020aac8_0x20aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aac8_0x20aac8");
#endif

    ctx->pc = 0x20aac8u;

    // 0x20aac8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x20aacc: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x20aaccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x20aad0: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x20aad0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x20aad4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20aad8: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x20aadc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20aae0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x20aae4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x20aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x20aae8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20aae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20aaec: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x20aaf0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aaf4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20aaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20aaf8: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x20aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x20aafc: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x20aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
    // 0x20ab00: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x20ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x20ab04u;
}
